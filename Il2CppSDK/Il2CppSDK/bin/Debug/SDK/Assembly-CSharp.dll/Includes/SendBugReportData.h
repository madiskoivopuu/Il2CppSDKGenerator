#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendBugReportData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendBugReportData"));
	}

	template <typename R = int64_t> R& LastReport() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SendBugReportData*, uintptr_t))(Il2CppBase() + 0x1363E70))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SendBugReportData*, uintptr_t))(Il2CppBase() + 0x1363EB4))(this, reader);
	}

};

