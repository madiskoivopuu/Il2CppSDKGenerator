#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BugReportDelay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugReportDelay"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BugReportDelay*, Il2CppObject*))(Il2CppBase() + 0x15A0BC8))(this, targetObject);
	}

};

