#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInviteContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInviteContexts"));
	}


	template <typename R = InviteContext*> R get_invites() {
		return ((R (*)(IInviteContexts*))(Il2CppBase() + 0x0))(this);
	}

};

