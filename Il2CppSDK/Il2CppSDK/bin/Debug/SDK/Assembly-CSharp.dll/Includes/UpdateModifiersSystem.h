#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateModifiersSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateModifiersSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _sharedBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _isServer() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(UpdateModifiersSystem*, uintptr_t))(Il2CppBase() + 0x153EFE8))(this, entity);
	}
	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(UpdateModifiersSystem*, void*))(Il2CppBase() + 0x153F040))(this, context);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* magicEntities) {
		return ((T (*)(UpdateModifiersSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x153F048))(this, magicEntities);
	}

};

}
