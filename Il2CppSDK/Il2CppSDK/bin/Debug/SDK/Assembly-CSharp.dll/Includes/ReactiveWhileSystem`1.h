#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReactiveWhileSystem1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReactiveWhileSystem`1"));
	}

	template <typename T = void*> T& _collector() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _toStringCache() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ReactiveWhileSystem1*, void*))(Il2CppBase() + 0x0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ReactiveWhileSystem1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ReactiveWhileSystem1*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, entities);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Execute_1() {
		return ((T (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(ReactiveWhileSystem1*))(Il2CppBase() + 0x0))(this);
	}

};

}
