#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowBugReport(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11982E4))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowSimpleBugReport(uintptr_t manager, uintptr_t bugType, Il2CppString* bugCaption, uintptr_t bugPriority, uintptr_t onBugReportSent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11983A0))(0, manager, bugType, bugCaption, bugPriority, onBugReportSent);
	}

};

}
