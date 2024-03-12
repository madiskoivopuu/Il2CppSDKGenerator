#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MultiCollectorReactiveSystem1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiCollectorReactiveSystem`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _collectors() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _toStringCache() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetTriggers(void* context) {
		return ((T (*)(MultiCollectorReactiveSystem1*, void*))(Il2CppBase() + 0x0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity, int32_t collectorIndex) {
		return ((T (*)(MultiCollectorReactiveSystem1*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, entity, collectorIndex);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities, int32_t collectorIndex) {
		return ((T (*)(MultiCollectorReactiveSystem1*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, entities, collectorIndex);
	}
	template <typename T = void> T AfterExecute() {
		return ((T (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Execute_1() {
		return ((T (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}

};

}
