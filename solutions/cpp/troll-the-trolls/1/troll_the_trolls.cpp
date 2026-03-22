namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum AccountStatus {
        troll, // 0
        guest, // 1
        user, // 2
        mod // 3
    };
// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum Action {
        read,
        write,
        remove
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer){
        if(poster == troll){
            switch(viewer){
                case troll:
                    return true;
                case guest:
                case user:
                case mod:
                default:
                    return false;
            }
        }
        return true;
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action actionUsed, AccountStatus status){
        switch(actionUsed){
            case remove:
                if(status == mod){
                    return true;
                } // To check if User is a moderator.
                return false;
            case write:
                if(status != guest){
                    return true;
                } // To check if User is not a guest.
                return false;
            case read:
                return true;
            default:
                return false;
        }
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player1Status, AccountStatus player2Status){
        if(player1Status == guest || player2Status == guest){ return false; } // To check if player 1 or 2 is a guest.
        else{
            switch(player1Status /* To check player 1's status. */){
                case troll:
                    if(player2Status == troll){ return true; } // If player 2 is a troll allow battle.
                    return false;
                case user:
                case mod:
                    if(player2Status == troll){ return false; } // If player 2 is a troll don't allow the battle for (User-Mod).
                    return true;
                default: 
                    return false;
            }
        }
    }
// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus firstUser, AccountStatus secondUser){
        if(firstUser <= secondUser){ return false; }
        return true;
    }
}  // namespace hellmath
