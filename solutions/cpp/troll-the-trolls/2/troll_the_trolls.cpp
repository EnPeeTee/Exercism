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
        if(poster == troll){ return viewer == troll; }
        return true;
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action actionUsed, AccountStatus status){
        switch(actionUsed){
            case remove:
                return (status == mod);
            case write:
                return (status != guest);
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
        if(player1Status == guest || player2Status == guest){ return false; }
        else if(player1Status == troll || player2Status == troll){ return player1Status == player2Status; /* Only if both player 1 and 2 are trolls then this is true. */ }
        else{ return true; }
    }
// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus firstUser, AccountStatus secondUser){
        if(firstUser <= secondUser){ return false; }
        return true;
    }
}  // namespace hellmath
