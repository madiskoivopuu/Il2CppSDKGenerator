#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpGroup"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClansFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_clans_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& clans_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TransitionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& transition_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& StartTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& DurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& duration_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& SearchDurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& searchDuration_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& DiplomaciesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_diplomacies_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& diplomacies_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BF678))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BF6DC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BF7FC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFA78))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFAD4))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFADC))(this, value);
	}
	template <typename T = void*> T get_Clans() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFAE4))(this);
	}
	template <typename T = uintptr_t> T get_Transition() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFAEC))(this);
	}
	template <typename T = void> T set_Transition(uintptr_t value) {
		return ((T (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11BFAF4))(this, value);
	}
	template <typename T = int64_t> T get_StartTime() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFAFC))(this);
	}
	template <typename T = void> T set_StartTime(int64_t value) {
		return ((T (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFB04))(this, value);
	}
	template <typename T = int64_t> T get_Duration() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFB0C))(this);
	}
	template <typename T = void> T set_Duration(int64_t value) {
		return ((T (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFB14))(this, value);
	}
	template <typename T = int64_t> T get_SearchDuration() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFB1C))(this);
	}
	template <typename T = void> T set_SearchDuration(int64_t value) {
		return ((T (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFB24))(this, value);
	}
	template <typename T = void*> T get_Diplomacies() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFB2C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11BFB34))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11BFBA4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFCB0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFDA0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11BFE04))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpGroup*))(Il2CppBase() + 0x11BFFD0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11C01FC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11C0368))(this, input);
	}

};

}
