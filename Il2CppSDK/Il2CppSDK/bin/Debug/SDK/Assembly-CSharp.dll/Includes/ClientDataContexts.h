#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContexts.h" 

class ClientDataContexts : public DataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientDataContexts"));
	}

	template <typename R = EffectDataContext*> R& effect() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = EffectDataContext*> R get_effect() {
		return ((R (*)(ClientDataContexts*))(Il2CppBase() + 0xE17860))(this);
	}
	template <typename R = void> R set_effect(EffectDataContext* value) {
		return ((R (*)(ClientDataContexts*, EffectDataContext*))(Il2CppBase() + 0xE17868))(this, value);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_allContexts() {
		return ((R (*)(ClientDataContexts*))(Il2CppBase() + 0xE17870))(this);
	}
	template <typename R = void> R Create(ICommonLogger* logger) {
		return ((R (*)(ClientDataContexts*, ICommonLogger*))(Il2CppBase() + 0xE17978))(this, logger);
	}
	template <typename R = Il2CppArray<ValueTuple2Action1Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*, Func1Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*>*>*> R GetContextToBlueprintConfig(DataBlueprints* datablueprints) {
		return ((R (*)(ClientDataContexts*, DataBlueprints*))(Il2CppBase() + 0xE17A00))(this, datablueprints);
	}

};

