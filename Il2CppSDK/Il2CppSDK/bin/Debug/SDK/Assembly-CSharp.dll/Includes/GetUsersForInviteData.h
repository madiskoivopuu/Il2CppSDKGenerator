#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUsersForInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetUsersForInviteData"));
	}


	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GetUsersForInviteData*, uintptr_t))(Il2CppBase() + 0x1772318))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GetUsersForInviteData*, uintptr_t))(Il2CppBase() + 0x1772328))(this, reader);
	}

};

