#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FakeProgressd45
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FakeProgress>d__45"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = BaseLoaderStep*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startTime5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FakeProgressd45*))(Il2CppBase() + 0xEE827C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FakeProgressd45*))(Il2CppBase() + 0xEE8280))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FakeProgressd45*))(Il2CppBase() + 0xEE837C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FakeProgressd45*))(Il2CppBase() + 0xEE8384))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FakeProgressd45*))(Il2CppBase() + 0xEE83C4))(this);
	}

};

