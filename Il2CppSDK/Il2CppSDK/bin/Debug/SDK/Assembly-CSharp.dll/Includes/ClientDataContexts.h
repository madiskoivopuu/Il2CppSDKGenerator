#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContexts" 

class ClientDataContexts: DataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientDataContexts"));
	}

	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T get_effect() {
		return ((T (*)(ClientDataContexts*))(Il2CppBase() + 0xE17860))(this);
	}
	template <typename T = void> T set_effect(uintptr_t value) {
		return ((T (*)(ClientDataContexts*, uintptr_t))(Il2CppBase() + 0xE17868))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(ClientDataContexts*))(Il2CppBase() + 0xE17870))(this);
	}
	template <typename T = void> T Create(uintptr_t logger) {
		return ((T (*)(ClientDataContexts*, uintptr_t))(Il2CppBase() + 0xE17978))(this, logger);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetContextToBlueprintConfig(uintptr_t datablueprints) {
		return ((T (*)(ClientDataContexts*, uintptr_t))(Il2CppBase() + 0xE17A00))(this, datablueprints);
	}

};

}
