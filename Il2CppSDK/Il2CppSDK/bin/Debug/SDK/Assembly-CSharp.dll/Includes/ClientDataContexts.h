#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContexts.h" 

class ClientDataContexts : public DataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientDataContexts"));
	}

	template <typename T = EffectDataContext*> T& effect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = EffectDataContext*> T get_effect() {
		return ((T (*)(ClientDataContexts*))(Il2CppBase() + 0xE17860))(this);
	}
	template <typename T = void> T set_effect(EffectDataContext* value) {
		return ((T (*)(ClientDataContexts*, EffectDataContext*))(Il2CppBase() + 0xE17868))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(ClientDataContexts*))(Il2CppBase() + 0xE17870))(this);
	}
	template <typename T = void> T Create(ICommonLogger* logger) {
		return ((T (*)(ClientDataContexts*, ICommonLogger*))(Il2CppBase() + 0xE17978))(this, logger);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetContextToBlueprintConfig(DataBlueprints* datablueprints) {
		return ((T (*)(ClientDataContexts*, DataBlueprints*))(Il2CppBase() + 0xE17A00))(this, datablueprints);
	}

};

