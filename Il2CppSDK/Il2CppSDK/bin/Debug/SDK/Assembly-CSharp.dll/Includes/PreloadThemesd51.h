#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreloadThemesd51
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PreloadThemes>d__51"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = AudioManager*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& preloadTimeLimit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sw5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = EnumeratorIl2CppString*, AudioTheme*>*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = AudioTheme*> T& theme5__4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap4() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& 7__wrap5() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1A5C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1ACC))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1A78))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1F48))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1F50))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PreloadThemesd51*))(Il2CppBase() + 0xEE1F90))(this);
	}

};

