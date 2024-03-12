#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class FriendsAdWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FriendsAdWindow"));
	}


	template <typename T = void> T OnInviteClick() {
		return ((T (*)(FriendsAdWindow*))(Il2CppBase() + 0x15FE0F0))(this);
	}

};

}
