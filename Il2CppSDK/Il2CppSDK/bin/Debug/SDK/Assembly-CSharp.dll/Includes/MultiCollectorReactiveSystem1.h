#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity>
class MultiCollectorReactiveSystem1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiCollectorReactiveSystem`1"));
	}

	 Il2CppArray<ICollector1<TEntity>*>*& _collectors() {
		return *(Il2CppArray<ICollector1<TEntity>*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _toStringCache() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	 Il2CppArray<ICollector1<TEntity>*>* GetTriggers(IContext1<TEntity>* context) {
		return ((Il2CppArray<ICollector1<TEntity>*>* (*)(MultiCollectorReactiveSystem1*, IContext1<TEntity>*))(Il2CppBase() + 0x0))(this, context);
	}
	template <typename R = bool> R Filter(TEntity entity, int32_t collectorIndex) {
		return ((R (*)(MultiCollectorReactiveSystem1*, TEntity, int32_t))(Il2CppBase() + 0x0))(this, entity, collectorIndex);
	}
	template <typename R = void> R Execute(Il2CppList<TEntity>* entities, int32_t collectorIndex) {
		return ((R (*)(MultiCollectorReactiveSystem1*, Il2CppList<TEntity>*, int32_t))(Il2CppBase() + 0x0))(this, entities, collectorIndex);
	}
	template <typename R = void> R AfterExecute() {
		return ((R (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Activate() {
		return ((R (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Deactivate() {
		return ((R (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Execute_1() {
		return ((R (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Finalize() {
		return ((R (*)(MultiCollectorReactiveSystem1*))(Il2CppBase() + 0x0))(this);
	}

};

