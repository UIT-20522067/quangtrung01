Point apple;

void genApple()
{
	srand(time(0));
	int x = rand() % (WIDTH - 1) + 1;
	int y = rand() % (HEIGHT - 1) + 1;
	apple = {
		x,
		y,
	};
	// Sau khi có tọa độ quả táo thì vẽ lên màn hình
	gotoxy(x, y);
	cout << APPLE;
}

bool isAteApple()
{
	return snake[0].x == apple.x && snake[0].y == apple.y;
}
