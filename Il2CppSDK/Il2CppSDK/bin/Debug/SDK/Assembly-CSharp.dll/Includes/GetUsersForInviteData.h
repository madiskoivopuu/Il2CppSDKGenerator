#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUsersForInviteData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetUsersForInviteData"));
	}


	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GetUsersForInviteData*, uintptr_t))(Il2CppBase() + 0x1772318))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GetUsersForInviteData*, uintptr_t))(Il2CppBase() + 0x1772328))(this, reader);
	}

};

