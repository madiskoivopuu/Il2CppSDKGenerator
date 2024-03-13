#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendBugReportData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendBugReportData"));
	}

	template <typename T = int64_t> T& LastReport() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SendBugReportData*, uintptr_t))(Il2CppBase() + 0x1363E70))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SendBugReportData*, uintptr_t))(Il2CppBase() + 0x1363EB4))(this, reader);
	}

};

