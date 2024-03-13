#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass350
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_0"));
	}

	template <typename T = AndroidClient*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Action1LoadFriendsStatus*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadFriendsPaginatedb__0(uintptr_t annotatedData) {
		return ((T (*)(cDisplayClass350*, uintptr_t))(Il2CppBase() + 0x113B710))(this, annotatedData);
	}
	template <typename T = void> T LoadFriendsPaginatedb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass350*, uintptr_t))(Il2CppBase() + 0x113BB5C))(this, exception);
	}

};

