#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadImaged23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadImage>d__23"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GooglePlayGames::PlayGamesUserProfile*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& www5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(LoadImaged23*))(Il2CppBase() + 0x10B188C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(LoadImaged23*))(Il2CppBase() + 0x10B1890))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(LoadImaged23*))(Il2CppBase() + 0x10B1ABC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(LoadImaged23*))(Il2CppBase() + 0x10B1AC4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(LoadImaged23*))(Il2CppBase() + 0x10B1B04))(this);
	}

};

