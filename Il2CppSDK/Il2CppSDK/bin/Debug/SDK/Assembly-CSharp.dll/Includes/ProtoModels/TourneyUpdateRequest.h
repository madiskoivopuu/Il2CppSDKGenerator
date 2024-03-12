#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TourneyUpdateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TourneyUpdateRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TotalPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& totalPoints_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x150D86C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x150D8D0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150D9F0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DA98))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DAF4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(TourneyUpdateRequest*, int64_t))(Il2CppBase() + 0x150DAFC))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DB04))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(TourneyUpdateRequest*, int64_t))(Il2CppBase() + 0x150DB0C))(this, value);
	}
	template <typename T = int32_t> T get_TotalPoints() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DB14))(this);
	}
	template <typename T = void> T set_TotalPoints(int32_t value) {
		return ((T (*)(TourneyUpdateRequest*, int32_t))(Il2CppBase() + 0x150DB1C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TourneyUpdateRequest*, uintptr_t))(Il2CppBase() + 0x150DB24))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(TourneyUpdateRequest*, uintptr_t))(Il2CppBase() + 0x150DBD0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DC20))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DCAC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(TourneyUpdateRequest*, uintptr_t))(Il2CppBase() + 0x150DD10))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(TourneyUpdateRequest*))(Il2CppBase() + 0x150DDC0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(TourneyUpdateRequest*, uintptr_t))(Il2CppBase() + 0x150DEB8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(TourneyUpdateRequest*, uintptr_t))(Il2CppBase() + 0x150DEE4))(this, input);
	}

};

}
