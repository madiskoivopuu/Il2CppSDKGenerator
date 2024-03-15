#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FakeProgressd45
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FakeProgress>d__45"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& time() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = BaseLoaderStep*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& startTime5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(FakeProgressd45*))(Il2CppBase() + 0xEE827C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(FakeProgressd45*))(Il2CppBase() + 0xEE8280))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(FakeProgressd45*))(Il2CppBase() + 0xEE837C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(FakeProgressd45*))(Il2CppBase() + 0xEE8384))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(FakeProgressd45*))(Il2CppBase() + 0xEE83C4))(this);
	}

};

