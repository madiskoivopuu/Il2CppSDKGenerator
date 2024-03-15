#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity>
class ReactiveWhileSystem1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReactiveWhileSystem`1"));
	}

	 ICollector1TEntity>*& _collector() {
		return *(ICollector1TEntity>**)((uintptr_t)this + 0x0);
	}
	 Il2CppList<TEntity>*& _buffer() {
		return *(Il2CppList<TEntity>**)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _toStringCache() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	 ICollector1TEntity>* GetTrigger(IContext1TEntity>* context) {
		return ((ICollector1TEntity>* (*)(ReactiveWhileSystem1*, IContext1TEntity>*))(Il2CppBase() + 0x0))(this, context);
	}
	template <typename R = bool> R Filter(TEntity entity) {
		return ((R (*)(ReactiveWhileSystem1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<TEntity>* entities) {
		return ((R (*)(ReactiveWhileSystem1*, Il2CppList<TEntity>*))(Il2CppBase() + 0x0))(this, entities);
	}
	template <typename R = void> R Activate() {
		return ((R (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Deactivate() {
		return ((R (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Execute_1() {
		return ((R (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Finalize() {
		return ((R (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}

};

