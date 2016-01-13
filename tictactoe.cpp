#include <iostream>
using namespace std;


int main()
{
    char a = '1', b = '2', c = '3',
		 d = '4', e = '5', f = '6',
		 g = '7', h = '8', i = '9';
	char firstPlayerSymbol = 'X', secondPlayerSymbol = 'O';
	char nextMove;
	bool moveIsValid; // this is a flag

	/*
	 *
	 * DRAW THE BOARD
	 *
	 */
	cout << endl << endl;
	cout << a << '|' << b << '|' << c << endl;
	cout << "-+-+-" << endl;
	cout << d << '|' << e << '|' << f << endl;
	cout << "-+-+-" << endl;
	cout << g << '|' << h << '|' << i << endl << endl;

	/*
	 *
	 * TURN 1
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << firstPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
			
			a = firstPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
			
			b = firstPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
			
			c = firstPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
			
			d = firstPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
			
			e = firstPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
			
			f = firstPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
			
			g = firstPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
			
			h = firstPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
			
			i = firstPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == b == c) ||		// top row
				(d == e == f) ||		// middle row
				(g == h == i) ||		// bottom row
				(a == d == g) ||		// left column
				(b == e == h) ||		// center column
				(c == f == i) ||		// right column
				(a == e == i) ||		// diagonal, top left to bottom right
				(c == e == g))		// diagonal, top right to bottom left
				/*
				 *
				 *STUCK HERE. Something wrong that causes the game to continue even a player has technically won.
				 *
				 */
			{
				// winning combination!
				cout << "Congrats! " << firstPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 2
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << secondPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
			
			a = secondPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
			
			b = secondPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
			
			c = secondPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
			
			d = secondPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
			
			e = secondPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
			
			f = secondPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
			
			g = secondPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
			
			h = secondPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
			
			i = secondPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */
			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == secondPlayerSymbol == b == c) ||		// top row
				(d == secondPlayerSymbol == e == f) ||		// middle row
				(g == secondPlayerSymbol == h == i) ||		// bottom row
				(a == secondPlayerSymbol == d == g) ||		// left column
				(b == secondPlayerSymbol == e == h) ||		// center column
				(c == secondPlayerSymbol == f == i) ||		// right column
				(a == secondPlayerSymbol == e == i) ||		// diagonal, top left to bottom right
				(c == secondPlayerSymbol == e == g))		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << secondPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 3
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << firstPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
		
			a = firstPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
		
			b = firstPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
		
			c = firstPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
	
			d = firstPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
	
			e = firstPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
	
			f = firstPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
		
			g = firstPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
	
			h = firstPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
		
			i = firstPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == b == c) ||		// top row
				(d == e == f) ||		// middle row
				(g == h == i) ||		// bottom row
				(a == d == g) ||		// left column
				(b == e == h) ||		// center column
				(c == f == i) ||		// right column
				(a == e == i) ||		// diagonal, top left to bottom right
				(c == e == g))		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << firstPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 4
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << secondPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
		
			a = secondPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
	
			b = secondPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move

			c = secondPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
		
			d = secondPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
	
			e = secondPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move

			f = secondPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
		
			g = secondPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
		
			h = secondPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
	
			i = secondPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == secondPlayerSymbol && b == secondPlayerSymbol && c == secondPlayerSymbol) ||		// top row
				(d == secondPlayerSymbol && e == secondPlayerSymbol && f == secondPlayerSymbol) ||		// middle row
				(g == secondPlayerSymbol && h == secondPlayerSymbol && i == secondPlayerSymbol) ||		// bottom row
				(a == secondPlayerSymbol && d == secondPlayerSymbol && g == secondPlayerSymbol) ||		// left column
				(b == secondPlayerSymbol && e == secondPlayerSymbol && h == secondPlayerSymbol) ||		// center column
				(c == secondPlayerSymbol && f == secondPlayerSymbol && i == secondPlayerSymbol) ||		// right column
				(a == secondPlayerSymbol && e == secondPlayerSymbol && i == secondPlayerSymbol) ||		// diagonal, top left to bottom right
				(c == secondPlayerSymbol && e == secondPlayerSymbol && g == secondPlayerSymbol))		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << secondPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 5
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << firstPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
		
			a = firstPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
		
			b = firstPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
		
			c = firstPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
		
			d = firstPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move

			e = firstPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
		
			f = firstPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
	
			g = firstPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
	
			h = firstPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
	
			i = firstPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if 
			    (a == b == c ||		// top row
				d == e == f ||		// middle row
				g == h == i ||		// bottom row
				a == d == g ||		// left column
				b == e == h ||		// center column
				c == f == i ||		// right column
				a == e == i ||		// diagonal, top left to bottom right
				c == e == g)		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << firstPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 6
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << secondPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
		
			a = secondPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
		
			b = secondPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
		
			c = secondPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
	
			d = secondPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
		
			e = secondPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
		
			f = secondPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
	
			g = secondPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
		
			h = secondPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
	
			i = secondPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == secondPlayerSymbol == b ==c ) ||		// top row
				(d == secondPlayerSymbol && e == secondPlayerSymbol && f == secondPlayerSymbol) ||		// middle row
				(g == secondPlayerSymbol && h == secondPlayerSymbol && i == secondPlayerSymbol) ||		// bottom row
				(a == secondPlayerSymbol && d == secondPlayerSymbol && g == secondPlayerSymbol) ||		// left column
				(b == secondPlayerSymbol && e == secondPlayerSymbol && h == secondPlayerSymbol) ||		// center column
				(c == secondPlayerSymbol && f == secondPlayerSymbol && i == secondPlayerSymbol) ||		// right column
				(a == secondPlayerSymbol && e == secondPlayerSymbol && i == secondPlayerSymbol) ||		// diagonal, top left to bottom right
				(c == secondPlayerSymbol && e == secondPlayerSymbol && g == secondPlayerSymbol))		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << secondPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 7
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << firstPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
		
			a = firstPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
		
			b = firstPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
			
			c = firstPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
		
			d = firstPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
	
			e = firstPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
		
			f = firstPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
		
			g = firstPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
		
			h = firstPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
		
			i = firstPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == b == c) ||		// top row
				(d == e == f) ||		// middle row
				(g == h == i) ||		// bottom row
				(a == d == g) ||		// left column
				(b == e == h) ||		// center column
				(c == f == i) ||		// right column
				(a == e == i) ||		// diagonal, top left to bottom right
				(c == e == g))		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << firstPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 8
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << secondPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
	
			a = secondPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
		
			b = secondPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
	
			c = secondPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
		
			d = secondPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
	
			e = secondPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
		
			f = secondPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
		
			g = secondPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
	        // spot empty, valid move
	        
			h = secondPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
		
			i = secondPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == secondPlayerSymbol == b == c) ||		// top row
				(d == secondPlayerSymbol == e == f) ||		// middle row
				(g == secondPlayerSymbol == h == i) ||		// bottom row
				(a == secondPlayerSymbol == d == g) ||		// left column
				(b == secondPlayerSymbol == e == h) ||		// center column
				(c == secondPlayerSymbol == f == i) ||		// right column
				(a == secondPlayerSymbol == e == i) ||		// diagonal, top left to bottom right
				(c == secondPlayerSymbol == e == g))		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << secondPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	/*
	 *
	 * TURN 9
	 *
	 */

	/*
	 *
	 * PRINT WHOSE TURN IT IS
	 *
	 */
	cout << firstPlayerSymbol << "'s turn: ";

	cin >> nextMove;
	moveIsValid = false; // update our flag immediately

	/*
	 *
	 * VALIDATE THE INPUT
	 * (to validate = to check that it makes sense)
	 *
	 */
	if (nextMove == '1' || '2' || '3' ||
		nextMove == '4' || '5' || '6' ||
		nextMove == '7' || '8' || '9')
	{
	    if ( (nextMove == '9' && i == '9') || (nextMove == '8' && h == '8') || (nextMove == '7' && g == '7') ||
			(nextMove == '6' && f == '6') || (nextMove == '5' && e == '5') || (nextMove == '4' && d == '4') ||
			(nextMove == '3' && c == '3') || (nextMove == '2' && b == '2') || (nextMove == '1' && a == '1') )

			moveIsValid = true;
		else
			moveIsValid = false;
			
		// valid character option
		// check if move is valid
		if (nextMove == '1' && a == '1')
		{
			// spot empty, valid move
		
			a = firstPlayerSymbol;
		}
		else if (nextMove == '2' && b == '2')
		{
			// spot empty, valid move
	
			b = firstPlayerSymbol;
		}
		else if (nextMove == '3' && c == '3')
		{
			// spot empty, valid move
	
			c = firstPlayerSymbol;
		}
		else if (nextMove == '4' && d == '4')
		{
			// spot empty, valid move
	
			d = firstPlayerSymbol;
		}
		else if (nextMove == '5' && e == '5')
		{
			// spot empty, valid move
		
			e = firstPlayerSymbol;
		}
		else if (nextMove == '6' && f == '6')
		{
			// spot empty, valid move
		
			f = firstPlayerSymbol;
		}
		else if (nextMove == '7' && g == '7')
		{
			// spot empty, valid move
	
			g = firstPlayerSymbol;
		}
		else if (nextMove == '8' && h == '8')
		{
			// spot empty, valid move
	
			h = firstPlayerSymbol;
		}
		else if (nextMove == '9' && i == '9')
		{
			// spot empty, valid move
		
			i = firstPlayerSymbol;
		}

		if (moveIsValid)
		{
			/*
			 *
			 * MOVE IS VALID
			 *
			 */

			// Draw the board.
			cout << endl << endl;
			cout << a << '|' << b << '|' << c << endl;
			cout << "-+-+-" << endl;
			cout << d << '|' << e << '|' << f << endl;
			cout << "-+-+-" << endl;
			cout << g << '|' << h << '|' << i << endl;

			/*
			 *
			 * CHECK FOR WINNING COMBINATION
			 *
			 */
			if ((a == b == c) ||		// top row
				(d == e == f) ||		// middle row
				(g == h == i) ||		// bottom row
				(a == d == g) ||		// left column
				(b == e == h) ||		// center column
				(c == f == i) ||		// right column
				(a == e == i) ||		// diagonal, top left to bottom right
				(c == e == g))		// diagonal, top right to bottom left
			{
				// winning combination!
				cout << "Congrats! " << firstPlayerSymbol << " is the winner." << endl;
				return 0;
			}
		}
		else
		{
			/*
			 *
			 * MOVE IS NOT VALID
			 *
			 */
			// invalid move, spot already occupied
			cout << "Location " << nextMove << " is already occupied." << endl
				 << "This program accepts only valid moves." << endl
				 << "Exiting game. Run program again to play another game." << endl << endl;
			return 0;
		}
	}
	else
	{
		/*
		 *
		 * INVALID INPUT
		 *
		 */

		// invalid position option
		cout << "You can only input numbers between 1 and 9." << endl
			 << "This program accepts only valid moves." << endl
			 << "Exiting game. Run program again to play another game." << endl << endl;
		return 0;
	}

	return 0;
}
