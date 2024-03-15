#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enterd18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Enter>d__18"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ArenaUnityController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Transition*> R& transition() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = cDisplayClass180*> R& 8__1() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ArenaTransition*> R& arenaTransition5__2() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ab5__3() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& a5__4() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Enterd18*))(Il2CppBase() + 0xEDA1E4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Enterd18*))(Il2CppBase() + 0xEDA1E8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Enterd18*))(Il2CppBase() + 0xEDA928))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Enterd18*))(Il2CppBase() + 0xEDA930))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Enterd18*))(Il2CppBase() + 0xEDA970))(this);
	}

};

