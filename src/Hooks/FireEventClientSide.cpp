#include "hooks.h"

bool Hooks::FireEventClientSide(void* thisptr, IGameEvent* event)
{
	Aimbot::FireEventClientSide(event);
	SkinChanger::FireEventClientSide(event);
	Spammer::FireEventClientSide(event);

	return gameEvents_vmt->GetOriginalMethod<FireEventClientSideFn>(10)(thisptr, event);
}