#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass320
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass32_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& pageSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T LoadAllFriendsb__0(uintptr_t result) {
		return ((T (*)(cDisplayClass320*, uintptr_t))(Il2CppBase() + 0x113B4F0))(this, result);
	}

};

}
