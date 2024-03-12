#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntitiesWithPositionNear1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntitiesWithPositionNear`1"));
	}

	template <typename T = void*> T& _entityIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& _x() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& _y() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& _radius() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(EntitiesWithPositionNear1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableT_GetEnumerator() {
		return ((T (*)(EntitiesWithPositionNear1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(EntitiesWithPositionNear1*))(Il2CppBase() + 0x0))(this);
	}

};

}
