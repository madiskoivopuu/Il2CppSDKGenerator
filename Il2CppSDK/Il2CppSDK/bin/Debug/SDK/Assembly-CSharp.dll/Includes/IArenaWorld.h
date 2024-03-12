#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArenaWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArenaWorld"));
	}


	template <typename T = bool> T QuadIsEmpty(int32_t quadId) {
		return ((T (*)(IArenaWorld*, int32_t))(Il2CppBase() + 0x0))(this, quadId);
	}
	template <typename T = bool> T get_IsActiveShield() {
		return ((T (*)(IArenaWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(IArenaWorld*, float, float, float))(Il2CppBase() + 0x0))(this, x, y, radius);
	}
	template <typename T = void*> T GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((T (*)(IArenaWorld*, float, float, float))(Il2CppBase() + 0x0))(this, x, y, radius);
	}
	template <typename T = void*> T GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(IArenaWorld*, float, float, float))(Il2CppBase() + 0x0))(this, x, y, radius);
	}

};

}
