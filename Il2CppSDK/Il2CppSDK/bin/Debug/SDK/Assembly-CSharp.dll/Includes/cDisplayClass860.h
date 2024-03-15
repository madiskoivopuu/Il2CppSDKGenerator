#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass860
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass86_0"));
	}

	template <typename R = Resource> R& resource() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R ShowRequirementsb__0(Resource r) {
		return ((R (*)(cDisplayClass860*, Resource))(Il2CppBase() + 0x1135CC8))(this, r);
	}

};

