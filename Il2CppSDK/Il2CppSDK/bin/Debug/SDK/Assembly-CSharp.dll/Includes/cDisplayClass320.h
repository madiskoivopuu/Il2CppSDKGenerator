#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass320
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass32_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1bool>*& callback() {
		return *(Action1bool>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& pageSize() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R LoadAllFriendsb__0(GooglePlayGamesBasicApi::LoadFriendsStatus* result) {
		return ((R (*)(cDisplayClass320*, GooglePlayGamesBasicApi::LoadFriendsStatus*))(Il2CppBase() + 0x113B4F0))(this, result);
	}

};

