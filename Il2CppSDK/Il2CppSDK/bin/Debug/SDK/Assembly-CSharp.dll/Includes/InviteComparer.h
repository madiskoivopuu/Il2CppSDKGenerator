#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteComparer"));
	}


	template <typename T = int32_t> T Compare(PlayerInviteView* x, PlayerInviteView* y) {
		return ((T (*)(InviteComparer*, PlayerInviteView*, PlayerInviteView*))(Il2CppBase() + 0x111AE14))(this, x, y);
	}

};

