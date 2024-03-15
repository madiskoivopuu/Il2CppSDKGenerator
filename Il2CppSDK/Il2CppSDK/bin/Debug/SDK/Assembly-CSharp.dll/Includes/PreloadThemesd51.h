#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreloadThemesd51
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PreloadThemes>d__51"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = AudioManager*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& preloadTimeLimit() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& sw5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Enumerator<Il2CppString*, AudioTheme*>*& 7__wrap2() {
		return *(Enumerator<Il2CppString*, AudioTheme*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = AudioTheme*> R& theme5__4() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<AudioTrack*>*> R& 7__wrap4() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& 7__wrap5() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1A5C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1ACC))(this);
	}
	template <typename R = void> R m__Finally1() {
		return ((R (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1A78))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1F48))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1F50))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1F90))(this);
	}

};

