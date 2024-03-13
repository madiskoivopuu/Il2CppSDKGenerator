#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

class ObjectPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "ObjectPool`1"));
	}

	template <typename T = Stack1uintptr_t>*> T& m_Stack() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = UnityAction1uintptr_t>*> T& m_ActionOnGet() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = UnityAction1uintptr_t>*> T& m_ActionOnRelease() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& countAll() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T get_countAll() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_countAll(int32_t value) {
		return ((T (*)(ObjectPool1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_countActive() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_countInactive() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Get() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Release(uintptr_t element) {
		return ((T (*)(ObjectPool1*, uintptr_t))(Il2CppBase() + 0x0))(this, element);
	}

};

}
