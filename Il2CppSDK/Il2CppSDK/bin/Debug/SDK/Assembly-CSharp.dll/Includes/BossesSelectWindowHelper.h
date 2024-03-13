#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossesSelectWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossesSelectWindowHelper"));
	}


	template <typename T = BossesSelectWindow*> static T GetSelectBossesWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16D1368))(0, manager);
	}
	template <typename T = BossesSelectWindow*> static T ShowSelectBossesWindow(UIWindowsManager* manager, int32_t targetId, Il2CppString* current, Action1Il2CppString*>* callback) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, Il2CppString*, Action1Il2CppString*>*))(Il2CppBase() + 0x16D1400))(0, manager, targetId, current, callback);
	}

};

