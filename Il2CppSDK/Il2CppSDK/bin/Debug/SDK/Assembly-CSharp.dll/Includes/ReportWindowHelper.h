#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportWindowHelper"));
	}


	template <typename R = BugReportWindow*> static R ShowBugReport(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x11982E4))(0, manager);
	}
	template <typename R = BugReportWindow*> static R ShowSimpleBugReport(UIWindowsManager* manager, BugReportType* bugType, Il2CppString* bugCaption, BugReportPriority* bugPriority, uintptr_t onBugReportSent) {
		return ((R (*)(void *, UIWindowsManager*, BugReportType*, Il2CppString*, BugReportPriority*, uintptr_t))(Il2CppBase() + 0x11983A0))(0, manager, bugType, bugCaption, bugPriority, onBugReportSent);
	}

};

