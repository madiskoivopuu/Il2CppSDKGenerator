#pragma once

#include "../mscorlib/System/ValueType.h"
#include "RatingGuildType.h"


class GuildRatingRequest : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildRatingRequest"));
	}

	RatingGuildType& RatingGuildType() {
		return *(RatingGuildType*)((uintptr_t)this + 0x0);
	}

};};
