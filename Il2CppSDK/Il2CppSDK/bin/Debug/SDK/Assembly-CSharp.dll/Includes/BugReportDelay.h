#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BugReportDelay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugReportDelay"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BugReportDelay*, uintptr_t))(Il2CppBase() + 0x15A0BC8))(this, targetObject);
	}

};

}
