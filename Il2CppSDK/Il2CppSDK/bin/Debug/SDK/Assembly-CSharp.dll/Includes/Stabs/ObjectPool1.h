#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

template <typename T>
class ObjectPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "ObjectPool`1"));
	}

	 Stack1T>*& m_Stack() {
		return *(Stack1T>**)((uintptr_t)this + 0x0);
	}
	 UnityAction1T>*& m_ActionOnGet() {
		return *(UnityAction1T>**)((uintptr_t)this + 0x0);
	}
	 UnityAction1T>*& m_ActionOnRelease() {
		return *(UnityAction1T>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& countAll() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = int32_t> R get_countAll() {
		return ((R (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_countAll(int32_t value) {
		return ((R (*)(ObjectPool1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = int32_t> R get_countActive() {
		return ((R (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_countInactive() {
		return ((R (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	 T Get() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Release(T element) {
		return ((R (*)(ObjectPool1*, T))(Il2CppBase() + 0x0))(this, element);
	}

};

}
