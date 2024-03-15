#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentGuildResultDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildResultDialogHelper"));
	}


	template <typename R = UIWindow*> static R ShowTournamentGuildResult(UIWindowsManager* manager, int64_t messageId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x150422C))(0, manager, messageId);
	}

};

