#include<raylib.h>
int main() {
	InitWindow(800, 800, "Flag Drawing");
	SetTargetFPS(60);
	Color bgColor = WHITE;
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(bgColor);

		if (IsKeyPressed(KEY_SPACE)) {
			bgColor = YELLOW;
			ClearBackground(bgColor);
		}
	
		DrawText("My first flag", 280, 500, 20, DARKGRAY);
		DrawRectangle(200, 250, 100, 200, RED);
		DrawRectangle(300, 250, 100, 200, GREEN);
		DrawRectangle(400, 250, 100, 200, BLUE);
		DrawCircle(350, 350, 40, WHITE);
		DrawCircle(250, 350, 40, WHITE);
		DrawCircle(450, 350, 40, WHITE);

		EndDrawing();
	}
	CloseWindow();
	
}