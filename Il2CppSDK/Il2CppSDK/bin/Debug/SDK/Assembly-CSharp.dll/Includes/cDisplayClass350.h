#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass350
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1GooglePlayGamesBasicApi::LoadFriendsStatus*>*& callback() {
		return *(Action1GooglePlayGamesBasicApi::LoadFriendsStatus*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R LoadFriendsPaginatedb__0(uintptr_t annotatedData) {
		return ((R (*)(cDisplayClass350*, uintptr_t))(Il2CppBase() + 0x113B710))(this, annotatedData);
	}
	template <typename R = void> R LoadFriendsPaginatedb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass350*, uintptr_t))(Il2CppBase() + 0x113BB5C))(this, exception);
	}

};

