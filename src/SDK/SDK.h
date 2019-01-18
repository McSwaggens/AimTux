#pragma once

#include <cstdint>
#include <dlfcn.h>
#include "../offsets.h"
#include "definitions.h"
#include "common.h"
#include "color.h"
#include "checksum_md5.h"
#include "CUtlMemory.h"
#include "CUtlVector.h"
#include "CEffects.h"
#include "CGlobalVars.h"
#include "CInput.h"
#include "IAppSystem.h"
#include "IBaseClientDLL.h"
#include "IInputSystem.h"
#include "IMaterial.h"
#include "IMaterialSystem.h"
#include "IVModelRender.h"
#include "IClientEntity.h"
#include "ISurface.h"
#include "IVDebugOverlay.h"
#include "IEngineClient.h"
#include "IVPanel.h"
#include "IVModelInfo.h"
#include "IEngineTrace.h"
#include "IClientEntityList.h"
#include "IClientMode.h"
#include "ICvar.h"
#include "IFileSystem.h"
#include "IGameEvent.h"
#include "ILocalize.h"
#include "CGameServer.h"
#include "CGlowObjectManager.h"
#include "IPhysicsSurfaceProps.h"
#include "CViewRender.h"
#include "IGameMovement.h"
#include "IPrediction.h"
#include "ILauncherMgr.h"
#include "CPlayerResource.h"
#include "CCSGameRules.h"
#include "IEngineVGui.h"
#include "IEngineSound.h"
#include "KeyValues.h"
#include "ICommandLine.h"
#include "CBaseClientState.h"
#include "panorama/PanoramaUIEngine.h"