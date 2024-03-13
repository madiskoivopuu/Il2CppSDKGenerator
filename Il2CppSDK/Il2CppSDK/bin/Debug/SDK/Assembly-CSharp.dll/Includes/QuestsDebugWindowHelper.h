#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestsDebugWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsDebugWindowHelper"));
	}


	template <typename T = QuestsDebugWindow*> static T GetOrShowQuestsDebug(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1708028))(0, manager);
	}

};

