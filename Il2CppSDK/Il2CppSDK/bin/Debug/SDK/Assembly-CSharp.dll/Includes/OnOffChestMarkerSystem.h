#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnOffChestMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnOffChestMarkerSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _chests() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(OnOffChestMarkerSystem*))(Il2CppBase() + 0x11DD9CC))(this);
	}
	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(OnOffChestMarkerSystem*, void*))(Il2CppBase() + 0x11DDA48))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(OnOffChestMarkerSystem*, uintptr_t))(Il2CppBase() + 0x11DDB14))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(OnOffChestMarkerSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x11DDB30))(this, entities);
	}

};

}
