#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class FriendsAdWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FriendsAdWindow"));
	}


	template <typename R = void> R OnInviteClick() {
		return ((R (*)(FriendsAdWindow*))(Il2CppBase() + 0x15FE0F0))(this);
	}

};
