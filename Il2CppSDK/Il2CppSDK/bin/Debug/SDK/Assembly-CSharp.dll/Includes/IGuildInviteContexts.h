#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildInviteContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildInviteContexts"));
	}


	template <typename T = uintptr_t> T get_guildInvites() {
		return ((T (*)(IGuildInviteContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
