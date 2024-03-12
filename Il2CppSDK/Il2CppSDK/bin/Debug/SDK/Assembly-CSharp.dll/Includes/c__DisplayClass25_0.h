#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass250
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass25_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& scopes() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T RequestPermissionsb__0(uintptr_t accountWithNewScopes) {
		return ((T (*)(cDisplayClass250*, uintptr_t))(Il2CppBase() + 0x1147190))(this, accountWithNewScopes);
	}
	template <typename T = void> T RequestPermissionsb__1(uintptr_t e) {
		return ((T (*)(cDisplayClass250*, uintptr_t))(Il2CppBase() + 0x114750C))(this, e);
	}

};

}
