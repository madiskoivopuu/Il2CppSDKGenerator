#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreInboxWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreInboxWindowHelper"));
	}


	template <typename T = StoreInboxWindow*> static T ShowStoreInbox(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x182DD5C))(0, manager);
	}
	template <typename T = void> static T UpdateStoreInbox(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x182DDF4))(0, manager);
	}

};

