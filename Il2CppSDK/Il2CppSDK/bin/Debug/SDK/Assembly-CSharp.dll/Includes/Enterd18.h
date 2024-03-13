#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enterd18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Enter>d__18"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ArenaUnityController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Transition*> T& transition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = cDisplayClass180*> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ArenaTransition*> T& arenaTransition5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ab5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& a5__4() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Enterd18*))(Il2CppBase() + 0xEDA1E4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enterd18*))(Il2CppBase() + 0xEDA1E8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Enterd18*))(Il2CppBase() + 0xEDA928))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Enterd18*))(Il2CppBase() + 0xEDA930))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Enterd18*))(Il2CppBase() + 0xEDA970))(this);
	}

};

