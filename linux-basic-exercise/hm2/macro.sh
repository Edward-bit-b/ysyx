#!/bin/bash
macro(){
	echo "$(pwd)" > $HOME/macro_history.log

}

polo(){
	cd "$(cat "$HOME/macro_history.log")"
}
