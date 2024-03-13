#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FishingStatisticDataProto
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FishingStatisticDataProto"));
	}

	template <typename T = MessageParser1FishingStatisticDataProto*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& EventTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& eventTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ToolNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& toolName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& OscillationNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& oscillationName_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& UseFishnetNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& useFishnetName_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& SuccessFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& success_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& InterruptFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& interrupt_() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = int32_t> static T& LureNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& lureName_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& NodeNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& nodeName_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& DurationMsecFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& durationMsec_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& ResultFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& result_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& LifeTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lifeTime_() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& PveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveID_() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = MessageParser1FishingStatisticDataProto*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15F53F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15F545C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F557C))(this);
	}
	template <typename T = FishingStatisticDataProto*> T Clone() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F575C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57B8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57C0))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57C8))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57D0))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57D8))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57E0))(this, value);
	}
	template <typename T = int64_t> T get_EventTimeUnix() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57E8))(this);
	}
	template <typename T = void> T set_EventTimeUnix(int64_t value) {
		return ((T (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F57F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ToolName() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F57F8))(this);
	}
	template <typename T = void> T set_ToolName(Il2CppString* value) {
		return ((T (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5800))(this, value);
	}
	template <typename T = Il2CppString*> T get_OscillationName() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5880))(this);
	}
	template <typename T = void> T set_OscillationName(Il2CppString* value) {
		return ((T (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5888))(this, value);
	}
	template <typename T = Il2CppString*> T get_UseFishnetName() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5908))(this);
	}
	template <typename T = void> T set_UseFishnetName(Il2CppString* value) {
		return ((T (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5910))(this, value);
	}
	template <typename T = bool> T get_Success() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5990))(this);
	}
	template <typename T = void> T set_Success(bool value) {
		return ((T (*)(FishingStatisticDataProto*, bool))(Il2CppBase() + 0x15F5998))(this, value);
	}
	template <typename T = bool> T get_Interrupt() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F59A4))(this);
	}
	template <typename T = void> T set_Interrupt(bool value) {
		return ((T (*)(FishingStatisticDataProto*, bool))(Il2CppBase() + 0x15F59AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LureName() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F59B8))(this);
	}
	template <typename T = void> T set_LureName(Il2CppString* value) {
		return ((T (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F59C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_NodeName() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5A40))(this);
	}
	template <typename T = void> T set_NodeName(Il2CppString* value) {
		return ((T (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5A48))(this, value);
	}
	template <typename T = int32_t> T get_DurationMsec() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5AC8))(this);
	}
	template <typename T = void> T set_DurationMsec(int32_t value) {
		return ((T (*)(FishingStatisticDataProto*, int32_t))(Il2CppBase() + 0x15F5AD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Result() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5AD8))(this);
	}
	template <typename T = void> T set_Result(Il2CppString* value) {
		return ((T (*)(FishingStatisticDataProto*, Il2CppString*))(Il2CppBase() + 0x15F5AE0))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5B60))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(FishingStatisticDataProto*, int32_t))(Il2CppBase() + 0x15F5B68))(this, value);
	}
	template <typename T = int32_t> T get_LifeTime() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5B70))(this);
	}
	template <typename T = void> T set_LifeTime(int32_t value) {
		return ((T (*)(FishingStatisticDataProto*, int32_t))(Il2CppBase() + 0x15F5B78))(this, value);
	}
	template <typename T = int64_t> T get_PveID() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5B80))(this);
	}
	template <typename T = void> T set_PveID(int64_t value) {
		return ((T (*)(FishingStatisticDataProto*, int64_t))(Il2CppBase() + 0x15F5B88))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(FishingStatisticDataProto*, Il2CppObject*))(Il2CppBase() + 0x15F5B90))(this, other);
	}
	template <typename T = bool> T Equals_1(FishingStatisticDataProto* other) {
		return ((T (*)(FishingStatisticDataProto*, FishingStatisticDataProto*))(Il2CppBase() + 0x15F5C00))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5D74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F5F94))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(FishingStatisticDataProto*, uintptr_t))(Il2CppBase() + 0x15F5FF8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(FishingStatisticDataProto*))(Il2CppBase() + 0x15F6318))(this);
	}
	template <typename T = void> T MergeFrom(FishingStatisticDataProto* other) {
		return ((T (*)(FishingStatisticDataProto*, FishingStatisticDataProto*))(Il2CppBase() + 0x15F6700))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(FishingStatisticDataProto*, uintptr_t))(Il2CppBase() + 0x15F6830))(this, input);
	}

};

}
